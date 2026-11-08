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

// Function: entry_00167450
// Address: 0x167450 - 0x167460
void entry_00167450_0x167450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167450_0x167450");
#endif

    ctx->pc = 0x167450u;

    // 0x167450: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x167450u;
    {
        const bool branch_taken_0x167450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167450) {
            ctx->pc = 0x167454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167450u;
            // 0x167454: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167480u;
            return;
        }
    }
    ctx->pc = 0x167458u;
    // 0x167458: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x167458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16745c: 0xac4400e0  sw          $a0, 0xE0($v0)
    ctx->pc = 0x16745cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
    ctx->pc = 0x167460u;
}
