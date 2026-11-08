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

// Function: entry_00129a84
// Address: 0x129a84 - 0x129af0
void entry_00129a84_0x129a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129a84_0x129a84");
#endif

    switch (ctx->pc) {
        case 0x129ac0u: goto label_129ac0;
        default: break;
    }

    ctx->pc = 0x129a84u;

    // 0x129a84: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x129a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x129a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129a8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a90: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x129a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a98: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x129a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x129a9c: 0x7faa00f0  sq          $t2, 0xF0($sp)
    ctx->pc = 0x129a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 10));
    // 0x129aa0: 0x7fab0100  sq          $t3, 0x100($sp)
    ctx->pc = 0x129aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 11));
    // 0x129aa4: 0x7fac0110  sq          $t4, 0x110($sp)
    ctx->pc = 0x129aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 12));
    // 0x129aa8: 0x7fad0120  sq          $t5, 0x120($sp)
    ctx->pc = 0x129aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 13));
    // 0x129aac: 0x7fae0130  sq          $t6, 0x130($sp)
    ctx->pc = 0x129aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 14));
    // 0x129ab0: 0x7fb90140  sq          $t9, 0x140($sp)
    ctx->pc = 0x129ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 25));
    // 0x129ab4: 0xe7b80064  swc1        $f24, 0x64($sp)
    ctx->pc = 0x129ab4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x129ab8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x129AB8u;
    SET_GPR_U32(ctx, 31, 0x129AC0u);
    ctx->pc = 0x129ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AB8u;
    // 0x129abc: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x129AB8u, 0x129AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AC0u;
label_129ac0:
    // 0x129ac0: 0x7bb90140  lq          $t9, 0x140($sp)
    ctx->pc = 0x129ac0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x129ac4: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x129ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x129ac8: 0x7bae0130  lq          $t6, 0x130($sp)
    ctx->pc = 0x129ac8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x129acc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x129accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129ad0: 0x7bad0120  lq          $t5, 0x120($sp)
    ctx->pc = 0x129ad0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x129ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x129ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ad8: 0x7bac0110  lq          $t4, 0x110($sp)
    ctx->pc = 0x129ad8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x129adc: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x129adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
    // 0x129ae0: 0x7bab0100  lq          $t3, 0x100($sp)
    ctx->pc = 0x129ae0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x129ae4: 0x7baa00f0  lq          $t2, 0xF0($sp)
    ctx->pc = 0x129ae4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x129ae8: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x129ae8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x129aec: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x129aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x129af0u;
}
