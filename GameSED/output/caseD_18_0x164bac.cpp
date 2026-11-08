#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_18
// Address: 0x164bac - 0x164bb4
void caseD_18_0x164bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x164bac");
#endif

    ctx->pc = 0x164bacu;

    // 0x164bac: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x164BACu;
    {
        const bool branch_taken_0x164bac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x164bac) {
            ctx->pc = 0x164BC4u;
            return;
        }
    }
    ctx->pc = 0x164BB4u;
}
