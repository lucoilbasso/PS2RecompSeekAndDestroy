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

// Function: entry_0014fe98
// Address: 0x14fe98 - 0x14fee0
void entry_0014fe98_0x14fe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fe98_0x14fe98");
#endif

    switch (ctx->pc) {
        case 0x14fec0u: goto label_14fec0;
        default: break;
    }

    ctx->pc = 0x14fe98u;

    // 0x14fe98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14fe9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fe9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fea0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14fea4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14fea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14feac: 0x92020575  lbu         $v0, 0x575($s0)
    ctx->pc = 0x14feacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x14feb0: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14FEB0u;
    {
        const bool branch_taken_0x14feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEB0u;
        // 0x14feb4: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14feb0) {
            ctx->pc = 0x14FF30u;
            return;
        }
    }
    ctx->pc = 0x14FEB8u;
    // 0x14feb8: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x14FEB8u;
    SET_GPR_U32(ctx, 31, 0x14FEC0u);
    ctx->pc = 0x14FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEB8u;
    // 0x14febc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x14FEB8u, 0x14FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEC0u;
label_14fec0:
    // 0x14fec0: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x14fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14fec4: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x14fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14fec8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x14fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14fecc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FECCu;
    {
        const bool branch_taken_0x14fecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fecc) {
            ctx->pc = 0x14FED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FECCu;
            // 0x14fed0: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FEE0u;
            return;
        }
    }
    ctx->pc = 0x14FED4u;
    // 0x14fed4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x14fed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14fed8: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x14fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x14fedc: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x14fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->pc = 0x14fee0u;
}
