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

// Function: entry_001004e4
// Address: 0x1004e4 - 0x100508
void entry_001004e4_0x1004e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001004e4_0x1004e4");
#endif

    ctx->pc = 0x1004e4u;

    // 0x1004e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1004e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1004e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1004e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1004ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1004F0u;
    {
        const bool branch_taken_0x1004f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004F0u;
        // 0x1004f4: 0x24441918  addiu       $a0, $v0, 0x1918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004f0) {
            ctx->pc = 0x100508u;
            return;
        }
    }
    ctx->pc = 0x1004F8u;
    // 0x1004f8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1004fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1004FCu;
    {
        const bool branch_taken_0x1004fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004FCu;
        // 0x100500: 0x2447cf20  addiu       $a3, $v0, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004fc) {
            ctx->pc = 0x100510u;
            return;
        }
    }
    ctx->pc = 0x100504u;
    // 0x100504: 0x0  nop
    ctx->pc = 0x100504u;
    // NOP
    ctx->pc = 0x100508u;
}
