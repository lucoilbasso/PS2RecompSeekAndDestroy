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

// Function: entry_0017c0f8
// Address: 0x17c0f8 - 0x17c118
void entry_0017c0f8_0x17c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c0f8_0x17c0f8");
#endif

    ctx->pc = 0x17c0f8u;

    // 0x17c0f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c100: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17c100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c104: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c108: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17c108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c10c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x17c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c114: 0x0  nop
    ctx->pc = 0x17c114u;
    // NOP
    ctx->pc = 0x17c118u;
}
