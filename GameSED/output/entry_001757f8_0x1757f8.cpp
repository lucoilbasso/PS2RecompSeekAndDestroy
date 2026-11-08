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

// Function: entry_001757f8
// Address: 0x1757f8 - 0x175824
void entry_001757f8_0x1757f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001757f8_0x1757f8");
#endif

    ctx->pc = 0x1757f8u;

    // 0x1757f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1757f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1757fc: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x1757fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x175800: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x175800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x175804: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x175804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x175808: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17580c: 0x52f00  sll         $a1, $a1, 28
    ctx->pc = 0x17580cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x175810: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x175810u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175814: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x175814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x175818: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x175818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17581c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17581Cu;
    {
        const bool branch_taken_0x17581c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x17581c) {
            ctx->pc = 0x175820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17581Cu;
            // 0x175820: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175824u;
            return;
        }
    }
    ctx->pc = 0x175824u;
}
