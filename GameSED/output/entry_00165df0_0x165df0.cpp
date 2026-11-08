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

// Function: entry_00165df0
// Address: 0x165df0 - 0x165e48
void entry_00165df0_0x165df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165df0_0x165df0");
#endif

    ctx->pc = 0x165df0u;

label_165df0:
    // 0x165df0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x165df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_165df4:
    // 0x165df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165df8:
    // 0x165df8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_165dfc:
    // 0x165dfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x165dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_165e00:
    // 0x165e00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x165e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_165e04:
    // 0x165e04: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x165e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_165e08:
    // 0x165e08: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x165e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_165e0c:
    // 0x165e0c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x165e0cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_165e10:
    // 0x165e10: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x165e10u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_165e14:
    // 0x165e14: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x165e14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_165e18:
    // 0x165e18: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x165e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_165e1c:
    // 0x165e1c: 0x92060c00  lbu         $a2, 0xC00($s0)
    ctx->pc = 0x165e1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
label_165e20:
    // 0x165e20: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x165e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_165e24:
    // 0x165e24: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x165e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_165e28:
    // 0x165e28: 0x50400103  beql        $v0, $zero, . + 4 + (0x103 << 2)
label_165e2c:
    if (ctx->pc == 0x165E2Cu) {
        ctx->pc = 0x165E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E28u;
        // 0x165e2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E30u;
        goto label_165e30;
    }
    ctx->pc = 0x165E28u;
    {
        const bool branch_taken_0x165e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e28) {
            ctx->pc = 0x165E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E28u;
            // 0x165e2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x165E30u;
label_165e30:
    // 0x165e30: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_165e34:
    // 0x165e34: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_165e38:
    // 0x165e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_165e3c:
    // 0x165e3c: 0x8c637140  lw          $v1, 0x7140($v1)
    ctx->pc = 0x165e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28992)));
label_165e40:
    // 0x165e40: 0x600008  jr          $v1
label_165e44:
    if (ctx->pc == 0x165E44u) {
        ctx->pc = 0x165E48u;
        goto label_fallthrough_0x165e40;
    }
    ctx->pc = 0x165E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x165e40:
    ctx->pc = 0x165E48u;
}
