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

// Function: ApCameraZoomSetup__FP7WcActorff
// Address: 0x13f158 - 0x13f28c
void ApCameraZoomSetup__FP7WcActorff_0x13f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraZoomSetup__FP7WcActorff_0x13f158");
#endif

    switch (ctx->pc) {
        case 0x13f190u: goto label_13f190;
        case 0x13f1f8u: goto label_13f1f8;
        case 0x13f204u: goto label_13f204;
        default: break;
    }

    ctx->pc = 0x13f158u;

    // 0x13f158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f15c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13f160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f168: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x13f168u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x13f16c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x13f16cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x13f170: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x13f170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13f174: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13f174u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x13f178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f17c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13f17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13f180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f184: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f188: 0xc061a46  jal         func_186918
    ctx->pc = 0x13F188u;
    SET_GPR_U32(ctx, 31, 0x13F190u);
    ctx->pc = 0x13F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F188u;
    // 0x13f18c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F188u, 0x13F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F190u;
label_13f190:
    // 0x13f190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f194: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F194u;
    {
        const bool branch_taken_0x13f194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F194u;
        // 0x13f198: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f194) {
            ctx->pc = 0x13F1B8u;
            goto label_13f1b8;
        }
    }
    ctx->pc = 0x13F19Cu;
    // 0x13f19c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13f1a0: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13f1a4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F1A4u;
    {
        const bool branch_taken_0x13f1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f1a4) {
            ctx->pc = 0x13F1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F1A4u;
            // 0x13f1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F1BCu;
            goto label_13f1bc;
        }
    }
    ctx->pc = 0x13F1ACu;
    // 0x13f1ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F1ACu;
    {
        const bool branch_taken_0x13f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1ACu;
        // 0x13f1b0: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1ac) {
            ctx->pc = 0x13F1BCu;
            goto label_13f1bc;
        }
    }
    ctx->pc = 0x13F1B4u;
    // 0x13f1b4: 0x0  nop
    ctx->pc = 0x13f1b4u;
    // NOP
label_13f1b8:
    // 0x13f1b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f1bc:
    // 0x13f1bc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f1c0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13f1c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13f1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f1cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f1d0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x13f1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13f1d4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F1D4u;
    {
        const bool branch_taken_0x13f1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D4u;
        // 0x13f1d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1d4) {
            ctx->pc = 0x13F1E8u;
            goto label_13f1e8;
        }
    }
    ctx->pc = 0x13F1DCu;
    // 0x13f1dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13F1DCu;
    {
        const bool branch_taken_0x13f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1DCu;
        // 0x13f1e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1dc) {
            ctx->pc = 0x13F218u;
            goto label_13f218;
        }
    }
    ctx->pc = 0x13F1E4u;
    // 0x13f1e4: 0x0  nop
    ctx->pc = 0x13f1e4u;
    // NOP
label_13f1e8:
    // 0x13f1e8: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13f1ec: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F1ECu;
    {
        const bool branch_taken_0x13f1ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1ECu;
        // 0x13f1f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1ec) {
            ctx->pc = 0x13F214u;
            goto label_13f214;
        }
    }
    ctx->pc = 0x13F1F4u;
    // 0x13f1f4: 0x0  nop
    ctx->pc = 0x13f1f4u;
    // NOP
label_13f1f8:
    // 0x13f1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1fc: 0xc050680  jal         func_141A00
    ctx->pc = 0x13F1FCu;
    SET_GPR_U32(ctx, 31, 0x13F204u);
    ctx->pc = 0x13F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1FCu;
    // 0x13f200: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x13F1FCu, 0x13F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F204u;
label_13f204:
    // 0x13f204: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F204u;
    {
        const bool branch_taken_0x13f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F204u;
        // 0x13f208: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f204) {
            ctx->pc = 0x13F218u;
            goto label_13f218;
        }
    }
    ctx->pc = 0x13F20Cu;
    // 0x13f20c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F20Cu;
    {
        const bool branch_taken_0x13f20c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F20Cu;
        // 0x13f210: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f20c) {
            ctx->pc = 0x13F1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f1f8;
        }
    }
    ctx->pc = 0x13F214u;
label_13f214:
    // 0x13f214: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13f214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f218:
    // 0x13f218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f21c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13f21cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f220: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F220u;
    {
        const bool branch_taken_0x13f220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F220u;
        // 0x13f224: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f220) {
            ctx->pc = 0x13F230u;
            goto label_13f230;
        }
    }
    ctx->pc = 0x13F228u;
    // 0x13f228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F228u;
    {
        const bool branch_taken_0x13f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F228u;
        // 0x13f22c: 0xe454020c  swc1        $f20, 0x20C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f228) {
            ctx->pc = 0x13F240u;
            goto label_13f240;
        }
    }
    ctx->pc = 0x13F230u;
label_13f230:
    // 0x13f230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f238: 0xe440020c  swc1        $f0, 0x20C($v0)
    ctx->pc = 0x13f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 524), bits); }
    // 0x13f23c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f240:
    // 0x13f240: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x13f240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f244: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x13F244u;
    {
        const bool branch_taken_0x13f244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f244) {
            ctx->pc = 0x13F258u;
            goto label_13f258;
        }
    }
    ctx->pc = 0x13F24Cu;
    // 0x13f24c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F24Cu;
    {
        const bool branch_taken_0x13f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F24Cu;
        // 0x13f250: 0xe4550210  swc1        $f21, 0x210($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f24c) {
            ctx->pc = 0x13F264u;
            goto label_13f264;
        }
    }
    ctx->pc = 0x13F254u;
    // 0x13f254: 0x0  nop
    ctx->pc = 0x13f254u;
    // NOP
label_13f258:
    // 0x13f258: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13f258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x13f25c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f260: 0xe4400210  swc1        $f0, 0x210($v0)
    ctx->pc = 0x13f260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 528), bits); }
label_13f264:
    // 0x13f264: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f26c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x13f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x13f270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f274: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13f274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x13f278: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x13f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13f27c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f280: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x13f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f284: 0x3e00008  jr          $ra
    ctx->pc = 0x13F284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F284u;
        // 0x13f288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F28Cu;
}
