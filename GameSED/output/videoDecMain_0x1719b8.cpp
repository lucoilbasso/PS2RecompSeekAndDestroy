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

// Function: videoDecMain
// Address: 0x1719b8 - 0x171a24
void videoDecMain_0x1719b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecMain_0x1719b8");
#endif

    switch (ctx->pc) {
        case 0x1719dcu: goto label_1719dc;
        case 0x1719e4u: goto label_1719e4;
        case 0x1719ecu: goto label_1719ec;
        case 0x1719f0u: goto label_1719f0;
        default: break;
    }

    ctx->pc = 0x1719b8u;

    // 0x1719b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1719b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1719bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1719bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1719c0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1719c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1719c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1719c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1719c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1719c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719cc: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x1719ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1719d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1719d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1719d4: 0xc05d468  jal         func_1751A0
    ctx->pc = 0x1719D4u;
    SET_GPR_U32(ctx, 31, 0x1719DCu);
    ctx->pc = 0x1719D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719D4u;
    // 0x1719d8: 0x261012a8  addiu       $s0, $s0, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751A0u, 0x1719D4u, 0x1719DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719DCu;
label_1719dc:
    // 0x1719dc: 0xc05cf56  jal         func_173D58
    ctx->pc = 0x1719DCu;
    SET_GPR_U32(ctx, 31, 0x1719E4u);
    ctx->pc = 0x1719E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719DCu;
    // 0x1719e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D58u, 0x1719DCu, 0x1719E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719E4u;
label_1719e4:
    // 0x1719e4: 0xc05c68a  jal         func_171A28
    ctx->pc = 0x1719E4u;
    SET_GPR_U32(ctx, 31, 0x1719ECu);
    ctx->pc = 0x1719E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719E4u;
    // 0x1719e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171A28u, 0x1719E4u, 0x1719ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719ECu;
label_1719ec:
    // 0x1719ec: 0x0  nop
    ctx->pc = 0x1719ecu;
    // NOP
label_1719f0:
    // 0x1719f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1719f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1719f4: 0x0  nop
    ctx->pc = 0x1719f4u;
    // NOP
    // 0x1719f8: 0x0  nop
    ctx->pc = 0x1719f8u;
    // NOP
    // 0x1719fc: 0x0  nop
    ctx->pc = 0x1719fcu;
    // NOP
    // 0x171a00: 0x0  nop
    ctx->pc = 0x171a00u;
    // NOP
    // 0x171a04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x171A04u;
    {
        const bool branch_taken_0x171a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A04u;
        // 0x171a08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a04) {
            ctx->pc = 0x1719F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1719f0;
        }
    }
    ctx->pc = 0x171A0Cu;
    // 0x171a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a1c: 0x805c600  j           func_171800
    ctx->pc = 0x171A1Cu;
    ctx->pc = 0x171A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A1Cu;
    // 0x171a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171800u;
    videoDecSetState_0x171800(rdram, ctx, runtime); return;
    ctx->pc = 0x171A24u;
}
