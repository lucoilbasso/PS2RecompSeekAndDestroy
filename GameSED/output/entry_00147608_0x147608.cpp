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

// Function: entry_00147608
// Address: 0x147608 - 0x147638
void entry_00147608_0x147608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147608_0x147608");
#endif

    switch (ctx->pc) {
        case 0x14762cu: goto label_14762c;
        default: break;
    }

    ctx->pc = 0x147608u;

label_147608:
    // 0x147608: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x147608u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14760c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x147610: 0x0  nop
    ctx->pc = 0x147610u;
    // NOP
    // 0x147614: 0x0  nop
    ctx->pc = 0x147614u;
    // NOP
    // 0x147618: 0x0  nop
    ctx->pc = 0x147618u;
    // NOP
    // 0x14761c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14761Cu;
    {
        const bool branch_taken_0x14761c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x147620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14761Cu;
        // 0x147620: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14761c) {
            ctx->pc = 0x147608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147608;
        }
    }
    ctx->pc = 0x147624u;
    // 0x147624: 0xc051d3a  jal         func_1474E8
    ctx->pc = 0x147624u;
    SET_GPR_U32(ctx, 31, 0x14762Cu);
    ctx->pc = 0x147628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147624u;
    // 0x147628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1474E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1474E8u, 0x147624u, 0x14762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14762Cu;
label_14762c:
    // 0x14762c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147630: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x147630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x147634: 0x0  nop
    ctx->pc = 0x147634u;
    // NOP
    ctx->pc = 0x147638u;
}
