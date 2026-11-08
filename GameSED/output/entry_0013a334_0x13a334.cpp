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

// Function: entry_0013a334
// Address: 0x13a334 - 0x13a3a4
void entry_0013a334_0x13a334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a334_0x13a334");
#endif

    switch (ctx->pc) {
        case 0x13a348u: goto label_13a348;
        case 0x13a35cu: goto label_13a35c;
        case 0x13a370u: goto label_13a370;
        default: break;
    }

    ctx->pc = 0x13a334u;

    // 0x13a334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a338: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x13a338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13a33c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13a340: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13A340u;
    SET_GPR_U32(ctx, 31, 0x13A348u);
    ctx->pc = 0x13A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A340u;
    // 0x13a344: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13A340u, 0x13A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A348u;
label_13a348:
    // 0x13a348: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13a34c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a350: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13a350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a354: 0xc06164c  jal         func_185930
    ctx->pc = 0x13A354u;
    SET_GPR_U32(ctx, 31, 0x13A35Cu);
    ctx->pc = 0x13A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A354u;
    // 0x13a358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13A354u, 0x13A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A35Cu;
label_13a35c:
    // 0x13a35c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a360: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13a360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a368: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13A368u;
    SET_GPR_U32(ctx, 31, 0x13A370u);
    ctx->pc = 0x13A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A368u;
    // 0x13a36c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13A368u, 0x13A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A370u;
label_13a370:
    // 0x13a370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a378: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x13a37c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13a37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13a380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a388: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13a388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a38c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x13a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x13a390: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x13a390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a394: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A394u;
    {
        const bool branch_taken_0x13a394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A394u;
        // 0x13a398: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a394) {
            ctx->pc = 0x13A3A4u;
            return;
        }
    }
    ctx->pc = 0x13A39Cu;
    // 0x13a39c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13a3a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13a3a4u;
}
