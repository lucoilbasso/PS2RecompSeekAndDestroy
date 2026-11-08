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

// Function: entry_001cc570
// Address: 0x1cc570 - 0x1cc588
void entry_001cc570_0x1cc570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc570_0x1cc570");
#endif

    ctx->pc = 0x1cc570u;

    // 0x1cc570: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1cc574: 0x568200d6  bnel        $s4, $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x1CC574u;
    {
        const bool branch_taken_0x1cc574 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc574) {
            ctx->pc = 0x1CC578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC574u;
            // 0x1cc578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8D0u;
            return;
        }
    }
    ctx->pc = 0x1CC57Cu;
    // 0x1cc57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc580: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CC580u;
    {
        const bool branch_taken_0x1cc580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC580u;
        // 0x1cc584: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc580) {
            ctx->pc = 0x1CC524u;
            return;
        }
    }
    ctx->pc = 0x1CC588u;
}
