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

// Function: entry_001d8a20
// Address: 0x1d8a20 - 0x1d8ab4
void entry_001d8a20_0x1d8a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a20_0x1d8a20");
#endif

    ctx->pc = 0x1d8a20u;

label_1d8a20:
    // 0x1d8a20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d8a24: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x1d8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
    // 0x1d8a28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d8a2c: 0x0  nop
    ctx->pc = 0x1d8a2cu;
    // NOP
    // 0x1d8a30: 0x0  nop
    ctx->pc = 0x1d8a30u;
    // NOP
    // 0x1d8a34: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8A34u;
    {
        const bool branch_taken_0x1d8a34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A34u;
        // 0x1d8a38: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a34) {
            ctx->pc = 0x1D8A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a20;
        }
    }
    ctx->pc = 0x1D8A3Cu;
    // 0x1d8a3c: 0x25020300  addiu       $v0, $t0, 0x300
    ctx->pc = 0x1d8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 768));
    // 0x1d8a40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d8a44: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8a48: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d8a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d8a4c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d8a50: 0x25070220  addiu       $a3, $t0, 0x220
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 544));
    // 0x1d8a54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d8a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d8a58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d8a5c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d8a60: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1d8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1d8a64: 0xad0002f8  sw          $zero, 0x2F8($t0)
    ctx->pc = 0x1d8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 760), GPR_U32(ctx, 0));
    // 0x1d8a68: 0xad030214  sw          $v1, 0x214($t0)
    ctx->pc = 0x1d8a68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 532), GPR_U32(ctx, 3));
    // 0x1d8a6c: 0xad040210  sw          $a0, 0x210($t0)
    ctx->pc = 0x1d8a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 528), GPR_U32(ctx, 4));
    // 0x1d8a70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d8a74: 0xad000320  sw          $zero, 0x320($t0)
    ctx->pc = 0x1d8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 800), GPR_U32(ctx, 0));
    // 0x1d8a78: 0xad000324  sw          $zero, 0x324($t0)
    ctx->pc = 0x1d8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 804), GPR_U32(ctx, 0));
    // 0x1d8a7c: 0xad000328  sw          $zero, 0x328($t0)
    ctx->pc = 0x1d8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 808), GPR_U32(ctx, 0));
    // 0x1d8a80: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1d8a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1d8a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8a88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d8a88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d8a8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d8a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d8a90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d8a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d8a94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8a98: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1d8a98u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1d8a9c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1d8a9cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1d8aa0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1d8aa0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1d8aa4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1d8aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1d8aa8: 0x25060080  addiu       $a2, $t0, 0x80
    ctx->pc = 0x1d8aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x1d8aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AACu;
        // 0x1d8ab0: 0xad060230  sw          $a2, 0x230($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 560), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AB4u;
}
