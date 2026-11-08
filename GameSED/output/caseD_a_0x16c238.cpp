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

// Function: caseD_a
// Address: 0x16c238 - 0x16c270
void caseD_a_0x16c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x16c238");
#endif

    switch (ctx->pc) {
        case 0x16c258u: goto label_16c258;
        default: break;
    }

    ctx->pc = 0x16c238u;

    // 0x16c238: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16c23c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c240: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16c244: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x16c244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x16c248: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x16c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x16c24c: 0xae2201e0  sw          $v0, 0x1E0($s1)
    ctx->pc = 0x16c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
    // 0x16c250: 0xc066810  jal         func_19A040
    ctx->pc = 0x16C250u;
    SET_GPR_U32(ctx, 31, 0x16C258u);
    ctx->pc = 0x16C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C250u;
    // 0x16c254: 0xae2401e4  sw          $a0, 0x1E4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x16C250u, 0x16C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C258u;
label_16c258:
    // 0x16c258: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16c25c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c264: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x16C264u;
    {
        const bool branch_taken_0x16c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C264u;
        // 0x16c268: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c264) {
            ctx->pc = 0x16C434u;
            return;
        }
    }
    ctx->pc = 0x16C26Cu;
    // 0x16c26c: 0x0  nop
    ctx->pc = 0x16c26cu;
    // NOP
    ctx->pc = 0x16c270u;
}
