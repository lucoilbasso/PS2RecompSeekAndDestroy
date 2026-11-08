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

// Function: entry_00139fe4
// Address: 0x139fe4 - 0x13a050
void entry_00139fe4_0x139fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139fe4_0x139fe4");
#endif

    switch (ctx->pc) {
        case 0x13a000u: goto label_13a000;
        case 0x13a014u: goto label_13a014;
        case 0x13a028u: goto label_13a028;
        default: break;
    }

    ctx->pc = 0x139fe4u;

    // 0x139fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139fe8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x139fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x139fec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x139fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ff0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x139ff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x139ff4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x139ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x139ff8: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x139FF8u;
    SET_GPR_U32(ctx, 31, 0x13A000u);
    ctx->pc = 0x139FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FF8u;
    // 0x139ffc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x139FF8u, 0x13A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A000u;
label_13a000:
    // 0x13a000: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x13a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13a004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13a004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a008: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x13a008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a00c: 0xc06164c  jal         func_185930
    ctx->pc = 0x13A00Cu;
    SET_GPR_U32(ctx, 31, 0x13A014u);
    ctx->pc = 0x13A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A00Cu;
    // 0x13a010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13A00Cu, 0x13A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A014u;
label_13a014:
    // 0x13a014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a01c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13a01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a020: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13A020u;
    SET_GPR_U32(ctx, 31, 0x13A028u);
    ctx->pc = 0x13A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A020u;
    // 0x13a024: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13A020u, 0x13A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A028u;
label_13a028:
    // 0x13a028: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13a028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a030: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x13a034: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13a034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a038: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a03c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13a040: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A040u;
    {
        const bool branch_taken_0x13a040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A040u;
        // 0x13a044: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a040) {
            ctx->pc = 0x13A050u;
            return;
        }
    }
    ctx->pc = 0x13A048u;
    // 0x13a048: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13a04c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13a050u;
}
