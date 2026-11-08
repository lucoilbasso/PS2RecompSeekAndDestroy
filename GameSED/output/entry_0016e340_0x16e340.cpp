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

// Function: entry_0016e340
// Address: 0x16e340 - 0x16e3b8
void entry_0016e340_0x16e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e340_0x16e340");
#endif

    switch (ctx->pc) {
        case 0x16e36cu: goto label_16e36c;
        case 0x16e3a4u: goto label_16e3a4;
        default: break;
    }

    ctx->pc = 0x16e340u;

    // 0x16e340: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x16e344: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x16e344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16e348: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16E348u;
    {
        const bool branch_taken_0x16e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e348) {
            ctx->pc = 0x16E34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E348u;
            // 0x16e34c: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2E8u;
            return;
        }
    }
    ctx->pc = 0x16E350u;
    // 0x16e350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e354: 0x16820019  bne         $s4, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16E354u;
    {
        const bool branch_taken_0x16e354 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E354u;
        // 0x16e358: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e354) {
            ctx->pc = 0x16E3BCu;
            return;
        }
    }
    ctx->pc = 0x16E35Cu;
    // 0x16e35c: 0x52a00018  beql        $s5, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x16E35Cu;
    {
        const bool branch_taken_0x16e35c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e35c) {
            ctx->pc = 0x16E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E35Cu;
            // 0x16e360: 0xdfb10068  ld          $s1, 0x68($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3C0u;
            return;
        }
    }
    ctx->pc = 0x16E364u;
    // 0x16e364: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16E364u;
    SET_GPR_U32(ctx, 31, 0x16E36Cu);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16E364u, 0x16E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E36Cu;
label_16e36c:
    // 0x16e36c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e370: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16e374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16e378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e37c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16e37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16e380: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16e380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e384: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16e384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16e388: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16e38c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e38cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16e390: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e390u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16e394: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e394u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16e398: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16e398u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16e39c: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16E39Cu;
    SET_GPR_U32(ctx, 31, 0x16E3A4u);
    ctx->pc = 0x16E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E39Cu;
    // 0x16e3a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16E39Cu, 0x16E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3A4u;
label_16e3a4:
    // 0x16e3a4: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x16e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x16e3a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3b0: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16E3B0u;
    SET_GPR_U32(ctx, 31, 0x16E3B8u);
    ctx->pc = 0x16E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E3B0u;
    // 0x16e3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16E3B0u, 0x16E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3B8u;
}
