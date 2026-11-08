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

// Function: entry_00175544
// Address: 0x175544 - 0x175570
void entry_00175544_0x175544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175544_0x175544");
#endif

    ctx->pc = 0x175544u;

    // 0x175544: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x175544u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175548: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17554c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x17554cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175550: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x175550u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175554: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x175554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175558: 0x2010  mfhi        $a0
    ctx->pc = 0x175558u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x17555c: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x17555cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x175560: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x175564: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x175564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x175568: 0xc05d440  jal         func_175100
    ctx->pc = 0x175568u;
    SET_GPR_U32(ctx, 31, 0x175570u);
    ctx->pc = 0x17556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175568u;
    // 0x17556c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x175568u, 0x175570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175570u;
}
