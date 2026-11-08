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

// Function: entry_00175d6c
// Address: 0x175d6c - 0x175e08
void entry_00175d6c_0x175d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175d6c_0x175d6c");
#endif

    ctx->pc = 0x175d6cu;

    // 0x175d6c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x175d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175d70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175d78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175d7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x175d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x175d80: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x175d80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x175d84: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175d88: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x175d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175d8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175d90: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x175d90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175d98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175d9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175da0: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x175da0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x175da4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175da8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x175da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175dac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175db0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x175db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x175db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175db8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175dbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175dc0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x175dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x175dc4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175dc8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175dcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175dd0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x175dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x175dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175dd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175ddc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175de0: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x175de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x175de4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175de8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x175de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x175dec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x175df0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x175df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x175df4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x175df4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x175dfc: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x175dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x175e00: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175E00u;
    {
        const bool branch_taken_0x175e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175e00) {
            ctx->pc = 0x175E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175E00u;
            // 0x175e04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175E08u;
            return;
        }
    }
    ctx->pc = 0x175E08u;
}
