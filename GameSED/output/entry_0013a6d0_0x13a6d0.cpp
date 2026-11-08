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

// Function: entry_0013a6d0
// Address: 0x13a6d0 - 0x13a744
void entry_0013a6d0_0x13a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a6d0_0x13a6d0");
#endif

    switch (ctx->pc) {
        case 0x13a6e8u: goto label_13a6e8;
        case 0x13a6fcu: goto label_13a6fc;
        case 0x13a710u: goto label_13a710;
        default: break;
    }

    ctx->pc = 0x13a6d0u;

    // 0x13a6d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a6d4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x13a6d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13a6d8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x13a6d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x13a6dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13a6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13a6e0: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13A6E0u;
    SET_GPR_U32(ctx, 31, 0x13A6E8u);
    ctx->pc = 0x13A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6E0u;
    // 0x13a6e4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13A6E0u, 0x13A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6E8u;
label_13a6e8:
    // 0x13a6e8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13a6ec: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x13a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13a6f0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13a6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a6f4: 0xc06164c  jal         func_185930
    ctx->pc = 0x13A6F4u;
    SET_GPR_U32(ctx, 31, 0x13A6FCu);
    ctx->pc = 0x13A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6F4u;
    // 0x13a6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13A6F4u, 0x13A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6FCu;
label_13a6fc:
    // 0x13a6fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a700: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13a700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a708: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13A708u;
    SET_GPR_U32(ctx, 31, 0x13A710u);
    ctx->pc = 0x13A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A708u;
    // 0x13a70c: 0x24070230  addiu       $a3, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13A708u, 0x13A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A710u;
label_13a710:
    // 0x13a710: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13a710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a718: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x13a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x13a71c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x13a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13a720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a724: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a728: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13a728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a72c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x13a730: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x13a730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a734: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A734u;
    {
        const bool branch_taken_0x13a734 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A734u;
        // 0x13a738: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a734) {
            ctx->pc = 0x13A744u;
            return;
        }
    }
    ctx->pc = 0x13A73Cu;
    // 0x13a73c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13a740: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x13a740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13a744u;
}
