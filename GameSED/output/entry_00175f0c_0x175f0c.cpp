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

// Function: entry_00175f0c
// Address: 0x175f0c - 0x175f9c
void entry_00175f0c_0x175f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f0c_0x175f0c");
#endif

    ctx->pc = 0x175f0cu;

    // 0x175f0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x175f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x175f10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x175f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x175f14: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x175f14u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175f18: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x175f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x175f1c: 0x2010  mfhi        $a0
    ctx->pc = 0x175f1cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x175f20: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x175f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x175f24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x175f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x175f28: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175f2c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x175f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x175f30: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x175f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175f34: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x175f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x175f38: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x175f3c: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x175f3cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175f40: 0x1010  mfhi        $v0
    ctx->pc = 0x175f40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175f44: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x175f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x175f48: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x175F48u;
    {
        const bool branch_taken_0x175f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F48u;
        // 0x175f4c: 0xe9402a  slt         $t0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f48) {
            ctx->pc = 0x175F9Cu;
            return;
        }
    }
    ctx->pc = 0x175F50u;
    // 0x175f50: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x175f50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175f54: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x175f54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175f58: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x175f58u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x175f5c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x175f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x175f60: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x175f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x175f64: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x175f64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x175f68: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x175f68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x175f6c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x175f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x175f70: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x175f74: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x175f74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x175f78: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x175f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x175f7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x175f80: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x175f80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x175f84: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x175f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x175f88: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x175f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x175f8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x175f8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f90: 0x2a2200a  movz        $a0, $s5, $v0
    ctx->pc = 0x175f90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
    // 0x175f94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x175f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175f98: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x175f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    ctx->pc = 0x175f9cu;
}
