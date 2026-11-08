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

// Function: entry_0015f148
// Address: 0x15f148 - 0x15f2a8
void entry_0015f148_0x15f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f148_0x15f148");
#endif

    switch (ctx->pc) {
        case 0x15f164u: goto label_15f164;
        case 0x15f16cu: goto label_15f16c;
        case 0x15f18cu: goto label_15f18c;
        case 0x15f194u: goto label_15f194;
        case 0x15f1bcu: goto label_15f1bc;
        case 0x15f1ccu: goto label_15f1cc;
        case 0x15f1e8u: goto label_15f1e8;
        default: break;
    }

    ctx->pc = 0x15f148u;

label_15f148:
    // 0x15f148: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15f148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15f14c:
    // 0x15f14c: 0x2454a8c8  addiu       $s4, $v0, -0x5738
    ctx->pc = 0x15f14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944968));
label_15f150:
    // 0x15f150: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15f154:
    // 0x15f154: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f158:
    // 0x15f158: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f15c:
    // 0x15f15c: 0xc06bd28  jal         func_1AF4A0
label_15f160:
    if (ctx->pc == 0x15F160u) {
        ctx->pc = 0x15F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F15Cu;
        // 0x15f160: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F164u;
        goto label_15f164;
    }
    ctx->pc = 0x15F15Cu;
    SET_GPR_U32(ctx, 31, 0x15F164u);
    ctx->pc = 0x15F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F15Cu;
    // 0x15f160: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F15Cu, 0x15F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F164u;
label_15f164:
    // 0x15f164: 0xc06bd20  jal         func_1AF480
label_15f168:
    if (ctx->pc == 0x15F168u) {
        ctx->pc = 0x15F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F164u;
        // 0x15f168: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F16Cu;
        goto label_15f16c;
    }
    ctx->pc = 0x15F164u;
    SET_GPR_U32(ctx, 31, 0x15F16Cu);
    ctx->pc = 0x15F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F164u;
    // 0x15f168: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F164u, 0x15F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F16Cu;
label_15f16c:
    // 0x15f16c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f170:
    // 0x15f170: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15f174:
    // 0x15f174: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f178:
    // 0x15f178: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f17c:
    // 0x15f17c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f180:
    // 0x15f180: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15f184:
    // 0x15f184: 0xc0682b2  jal         func_1A0AC8
label_15f188:
    if (ctx->pc == 0x15F188u) {
        ctx->pc = 0x15F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F184u;
        // 0x15f188: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F18Cu;
        goto label_15f18c;
    }
    ctx->pc = 0x15F184u;
    SET_GPR_U32(ctx, 31, 0x15F18Cu);
    ctx->pc = 0x15F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F184u;
    // 0x15f188: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F184u, 0x15F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F18Cu;
label_15f18c:
    // 0x15f18c: 0xc0682b6  jal         func_1A0AD8
label_15f190:
    if (ctx->pc == 0x15F190u) {
        ctx->pc = 0x15F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F18Cu;
        // 0x15f190: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F194u;
        goto label_15f194;
    }
    ctx->pc = 0x15F18Cu;
    SET_GPR_U32(ctx, 31, 0x15F194u);
    ctx->pc = 0x15F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F18Cu;
    // 0x15f190: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F18Cu, 0x15F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F194u;
label_15f194:
    // 0x15f194: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15f194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f198:
    // 0x15f198: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f19c:
    // 0x15f19c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15f1a0:
    // 0x15f1a0: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15f1a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15f1a4:
    // 0x15f1a4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15f1a8:
    // 0x15f1a8: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15f1ac:
    // 0x15f1ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15f1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b0:
    // 0x15f1b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b4:
    // 0x15f1b4: 0xc062cb0  jal         func_18B2C0
label_15f1b8:
    if (ctx->pc == 0x15F1B8u) {
        ctx->pc = 0x15F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1B4u;
        // 0x15f1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1BCu;
        goto label_15f1bc;
    }
    ctx->pc = 0x15F1B4u;
    SET_GPR_U32(ctx, 31, 0x15F1BCu);
    ctx->pc = 0x15F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1B4u;
    // 0x15f1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F1B4u, 0x15F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1BCu;
label_15f1bc:
    // 0x15f1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f1c0:
    // 0x15f1c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f1c4:
    // 0x15f1c4: 0xc06825c  jal         func_1A0970
label_15f1c8:
    if (ctx->pc == 0x15F1C8u) {
        ctx->pc = 0x15F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1C4u;
        // 0x15f1c8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1CCu;
        goto label_15f1cc;
    }
    ctx->pc = 0x15F1C4u;
    SET_GPR_U32(ctx, 31, 0x15F1CCu);
    ctx->pc = 0x15F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1C4u;
    // 0x15f1c8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F1C4u, 0x15F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1CCu;
label_15f1cc:
    // 0x15f1cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f1d0:
    // 0x15f1d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f1d4:
    // 0x15f1d4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f1d8:
    // 0x15f1d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f1dc:
    // 0x15f1dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f1e0:
    // 0x15f1e0: 0x60f809  jalr        $v1
label_15f1e4:
    if (ctx->pc == 0x15F1E4u) {
        ctx->pc = 0x15F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1E0u;
        // 0x15f1e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1E8u;
        goto label_15f1e8;
    }
    ctx->pc = 0x15F1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F1E8u);
        ctx->pc = 0x15F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1E0u;
        // 0x15f1e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F1E0u, 0x15F1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F1E8u;
label_15f1e8:
    // 0x15f1e8: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f1ec:
    // 0x15f1ec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15f1f0:
    if (ctx->pc == 0x15F1F0u) {
        ctx->pc = 0x15F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1ECu;
        // 0x15f1f0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1F4u;
        goto label_15f1f4;
    }
    ctx->pc = 0x15F1ECu;
    {
        const bool branch_taken_0x15f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1ECu;
        // 0x15f1f0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1ec) {
            ctx->pc = 0x15F2A8u;
            return;
        }
    }
    ctx->pc = 0x15F1F4u;
label_15f1f4:
    // 0x15f1f4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f1f8:
    // 0x15f1f8: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f1f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f1fc:
    // 0x15f1fc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f200:
    // 0x15f200: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f204:
    // 0x15f204: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f208:
    // 0x15f208: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f20c:
    // 0x15f20c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f210:
    // 0x15f210: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f214:
    // 0x15f214: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f218:
    // 0x15f218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f21c:
    // 0x15f21c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f220:
    // 0x15f220: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f224:
    // 0x15f224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f228:
    // 0x15f228: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f228u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f22c:
    // 0x15f22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f230:
    // 0x15f230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f234:
    // 0x15f234: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f238:
    // 0x15f238: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f23c:
    // 0x15f23c: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f240:
    // 0x15f240: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f240u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f244:
    // 0x15f244: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f248:
    // 0x15f248: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f248u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f24c:
    // 0x15f24c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f250:
    // 0x15f250: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f254:
    // 0x15f254: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f258:
    // 0x15f258: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f25c:
    // 0x15f25c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f25cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f260:
    // 0x15f260: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f260u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f264:
    // 0x15f264: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f264u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f268:
    // 0x15f268: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f268u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f26c:
    // 0x15f26c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f270:
    // 0x15f270: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f274:
    // 0x15f274: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f278:
    // 0x15f278: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f27c:
    // 0x15f27c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f280:
    // 0x15f280: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f284:
    // 0x15f284: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f288:
    // 0x15f288: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f288u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f28c:
    // 0x15f28c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f28cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f290:
    // 0x15f290: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f290u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f294:
    // 0x15f294: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f294u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f298:
    // 0x15f298: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f29c:
    // 0x15f29c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f29cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f2a0:
    // 0x15f2a0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f2a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f2a4:
    // 0x15f2a4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15f2a8u;
}
