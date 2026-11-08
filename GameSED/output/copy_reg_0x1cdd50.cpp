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

// Function: copy_reg
// Address: 0x1cdd50 - 0x1cddb4
void copy_reg_0x1cdd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copy_reg_0x1cdd50");
#endif

    switch (ctx->pc) {
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd88u: goto label_1cdd88;
        default: break;
    }

    ctx->pc = 0x1cdd50u;

    // 0x1cdd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cdd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdd60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdd68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cdd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cdd6c: 0xc073730  jal         func_1CDCC0
    ctx->pc = 0x1CDD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD74u);
    ctx->pc = 0x1CDD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD6Cu;
    // 0x1cdd70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDCC0u, 0x1CDD6Cu, 0x1CDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD74u;
label_1cdd74:
    // 0x1cdd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd80: 0xc073730  jal         func_1CDCC0
    ctx->pc = 0x1CDD80u;
    SET_GPR_U32(ctx, 31, 0x1CDD88u);
    ctx->pc = 0x1CDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD80u;
    // 0x1cdd84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDCC0u, 0x1CDD80u, 0x1CDD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD88u;
label_1cdd88:
    // 0x1cdd88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd8c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1cdd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1cdd90: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1cdd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1cdd94: 0x80c60568  lb          $a2, 0x568($a2)
    ctx->pc = 0x1cdd94u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1384)));
    // 0x1cdd98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cdd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdda0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdda0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdda4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdda8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cdda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cddac: 0x8074009  j           func_1D0024
    ctx->pc = 0x1CDDACu;
    ctx->pc = 0x1CDDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDACu;
    // 0x1cddb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    memcpy_0x1d0024(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDDB4u;
}
