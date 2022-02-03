//
//  library_management_systemApp.swift
//  Shared
//
//  Created by Sujan sapkota on 26/01/2022.
//

import SwiftUI

@main
struct library_management_systemApp: App {
    let persistenceController = PersistenceController.shared

    var body: some Scene {
        WindowGroup {
            ContentView()
                .environment(\.managedObjectContext, persistenceController.container.viewContext)
        }
    }
}
