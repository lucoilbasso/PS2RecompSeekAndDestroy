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

// Function: entry_001178e0
// Address: 0x1178e0 - 0x11793c
void entry_001178e0_0x1178e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001178e0_0x1178e0");
#endif

    switch (ctx->pc) {
        case 0x117900u: goto label_117900;
        default: break;
    }

    ctx->pc = 0x1178e0u;

label_1178e0:
    // 0x1178e0: 0x138600  sll         $s0, $s3, 24
    ctx->pc = 0x1178e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x1178e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1178e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1178e8: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x1178e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x1178ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1178ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1178f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1178f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178f4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1178f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1178f8: 0xc045360  jal         func_114D80
    ctx->pc = 0x1178F8u;
    SET_GPR_U32(ctx, 31, 0x117900u);
    ctx->pc = 0x1178FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178F8u;
    // 0x1178fc: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1178F8u, 0x117900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117900u;
label_117900:
    // 0x117900: 0x86020ff0  lh          $v0, 0xFF0($s0)
    ctx->pc = 0x117900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x117904: 0x2a63000c  slti        $v1, $s3, 0xC
    ctx->pc = 0x117904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117908: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x117908u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11790c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x11790cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x117910: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x117910u;
    {
        const bool branch_taken_0x117910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117910u;
        // 0x117914: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117910) {
            ctx->pc = 0x1178E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1178e0;
        }
    }
    ctx->pc = 0x117918u;
    // 0x117918: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x117918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11791c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x117920: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x117920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x117924: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x117924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x117928: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x117928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x11792c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x11792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x117930: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x117930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x117934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117938: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x117938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->pc = 0x11793cu;
}
