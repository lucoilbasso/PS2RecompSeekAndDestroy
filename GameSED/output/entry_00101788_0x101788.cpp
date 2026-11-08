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

// Function: entry_00101788
// Address: 0x101788 - 0x101808
void entry_00101788_0x101788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101788_0x101788");
#endif

    switch (ctx->pc) {
        case 0x101794u: goto label_101794;
        case 0x1017a0u: goto label_1017a0;
        default: break;
    }

    ctx->pc = 0x101788u;

label_101788:
    // 0x101788: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x101788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10178c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10178Cu;
    SET_GPR_U32(ctx, 31, 0x101794u);
    ctx->pc = 0x101790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10178Cu;
    // 0x101790: 0x8eb00028  lw          $s0, 0x28($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10178Cu, 0x101794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101794u;
label_101794:
    // 0x101794: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x101794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x101798: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101798u;
    SET_GPR_U32(ctx, 31, 0x1017A0u);
    ctx->pc = 0x10179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101798u;
    // 0x10179c: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101798u, 0x1017A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017A0u;
label_1017a0:
    // 0x1017a0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1017a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1017a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1017a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1017a8: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1017ac: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1017acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1017b0: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x1017b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1017b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1017b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1017b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1017bc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1017bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1017c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1017c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1017c4: 0x253302a  slt         $a2, $s2, $s3
    ctx->pc = 0x1017c4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1017c8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1017cc: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1017ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1017d0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1017d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1017d4: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x1017d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1017d8: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x1017d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x1017dc: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x1017dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1017e0: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x1017e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x1017e4: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x1017e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1017e8: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x1017e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x1017ec: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x1017ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1017f0: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x1017f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x1017f4: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x1017f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1017f8: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x1017f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x1017fc: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x1017fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x101800: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x101800u;
    {
        const bool branch_taken_0x101800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x101804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101800u;
        // 0x101804: 0xfca20038  sd          $v0, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101800) {
            ctx->pc = 0x101788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101788;
        }
    }
    ctx->pc = 0x101808u;
}
