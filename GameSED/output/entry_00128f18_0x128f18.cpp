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

// Function: entry_00128f18
// Address: 0x128f18 - 0x128fb8
void entry_00128f18_0x128f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128f18_0x128f18");
#endif

    switch (ctx->pc) {
        case 0x128f9cu: goto label_128f9c;
        default: break;
    }

    ctx->pc = 0x128f18u;

    // 0x128f18: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x128f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x128f1c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x128f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x128f20: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x128f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x128f24: 0x24a583a0  addiu       $a1, $a1, -0x7C60
    ctx->pc = 0x128f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935456));
    // 0x128f28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f30: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x128f34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x128f38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x128f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128f3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x128f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f40: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x128f40u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x128f44: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x128f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x128f48: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x128f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x128f4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x128f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x128f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128f54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x128f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x128f58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128f5c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x128f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x128f60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x128f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x128f64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x128f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128f68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x128f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f6c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x128f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x128f70: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x128f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128f74: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x128f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x128f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f80: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128f84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f88: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x128f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x128f8c: 0x7faa00f0  sq          $t2, 0xF0($sp)
    ctx->pc = 0x128f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 10));
    // 0x128f90: 0x7fae0100  sq          $t6, 0x100($sp)
    ctx->pc = 0x128f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 14));
    // 0x128f94: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x128F94u;
    SET_GPR_U32(ctx, 31, 0x128F9Cu);
    ctx->pc = 0x128F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F94u;
    // 0x128f98: 0x7faf0110  sq          $t7, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x128F94u, 0x128F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F9Cu;
label_128f9c:
    // 0x128f9c: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x128f9cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x128fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x128fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fa4: 0x7bae0100  lq          $t6, 0x100($sp)
    ctx->pc = 0x128fa4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x128fa8: 0x7baa00f0  lq          $t2, 0xF0($sp)
    ctx->pc = 0x128fa8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128fac: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x128facu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x128fb0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x128fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128fb4: 0x0  nop
    ctx->pc = 0x128fb4u;
    // NOP
    ctx->pc = 0x128fb8u;
}
