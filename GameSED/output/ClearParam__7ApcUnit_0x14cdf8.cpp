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

// Function: ClearParam__7ApcUnit
// Address: 0x14cdf8 - 0x14ce8c
void ClearParam__7ApcUnit_0x14cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearParam__7ApcUnit_0x14cdf8");
#endif

    switch (ctx->pc) {
        case 0x14ce24u: goto label_14ce24;
        default: break;
    }

    ctx->pc = 0x14cdf8u;

    // 0x14cdf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cdfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ce00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ce00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14ce08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce0c: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x14ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x14ce10: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x14ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x14ce14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CE14u;
    {
        const bool branch_taken_0x14ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE14u;
        // 0x14ce18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce14) {
            ctx->pc = 0x14CE24u;
            goto label_14ce24;
        }
    }
    ctx->pc = 0x14CE1Cu;
    // 0x14ce1c: 0xc055a96  jal         func_156A58
    ctx->pc = 0x14CE1Cu;
    SET_GPR_U32(ctx, 31, 0x14CE24u);
    ctx->pc = 0x156A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A58u, 0x14CE1Cu, 0x14CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE24u;
label_14ce24:
    // 0x14ce24: 0x26060200  addiu       $a2, $s0, 0x200
    ctx->pc = 0x14ce24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x14ce28: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x14ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x14ce2c: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x14ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x14ce30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ce30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ce34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14ce38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14ce38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ce3c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x14ce40: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x14ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x14ce44: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x14ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x14ce48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ce48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ce4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ce4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ce50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ce50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ce54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ce58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ce58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ce5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ce5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ce60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ce60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ce64: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14ce68: 0x2606020c  addiu       $a2, $s0, 0x20C
    ctx->pc = 0x14ce68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x14ce6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ce6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ce70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14ce70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ce74: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x14ce74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce78: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14ce78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce7c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14ce7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce80: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x14ce80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce84: 0x3e00008  jr          $ra
    ctx->pc = 0x14CE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE84u;
        // 0x14ce88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CE8Cu;
}
