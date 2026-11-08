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

// Function: entry_00192fa0
// Address: 0x192fa0 - 0x193048
void entry_00192fa0_0x192fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192fa0_0x192fa0");
#endif

    switch (ctx->pc) {
        case 0x192fc0u: goto label_192fc0;
        case 0x192fd4u: goto label_192fd4;
        case 0x192fe8u: goto label_192fe8;
        case 0x192ffcu: goto label_192ffc;
        case 0x193014u: goto label_193014;
        case 0x193044u: goto label_193044;
        default: break;
    }

    ctx->pc = 0x192fa0u;

    // 0x192fa0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192fa4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x192fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192fb0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fb8: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FB8u;
    SET_GPR_U32(ctx, 31, 0x192FC0u);
    ctx->pc = 0x192FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FB8u;
    // 0x192fbc: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FB8u, 0x192FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FC0u;
label_192fc0:
    // 0x192fc0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192fc4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x192fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x192fc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fcc: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FCCu;
    SET_GPR_U32(ctx, 31, 0x192FD4u);
    ctx->pc = 0x192FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FCCu;
    // 0x192fd0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FCCu, 0x192FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FD4u;
label_192fd4:
    // 0x192fd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x192fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x192fdc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x192fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x192fe0: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FE0u;
    SET_GPR_U32(ctx, 31, 0x192FE8u);
    ctx->pc = 0x192FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FE0u;
    // 0x192fe4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FE0u, 0x192FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FE8u;
label_192fe8:
    // 0x192fe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x192ff0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x192ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192ff4: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FF4u;
    SET_GPR_U32(ctx, 31, 0x192FFCu);
    ctx->pc = 0x192FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FF4u;
    // 0x192ff8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FF4u, 0x192FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FFCu;
label_192ffc:
    // 0x192ffc: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x192ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x193000: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x193000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193008: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x193008u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19300c: 0xc064cc6  jal         func_193318
    ctx->pc = 0x19300Cu;
    SET_GPR_U32(ctx, 31, 0x193014u);
    ctx->pc = 0x193010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19300Cu;
    // 0x193010: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x19300Cu, 0x193014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193014u;
label_193014:
    // 0x193014: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x193014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x193018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x193018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19301c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x19301cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193020: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x193020u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x193024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193028: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x193028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19302c: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x19302cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x193030: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x193034: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x193034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x193038: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x193038u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x19303c: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x19303Cu;
    SET_GPR_U32(ctx, 31, 0x193044u);
    ctx->pc = 0x193040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19303Cu;
    // 0x193040: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x19303Cu, 0x193044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193044u;
label_193044:
    // 0x193044: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x193044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193048u;
}
