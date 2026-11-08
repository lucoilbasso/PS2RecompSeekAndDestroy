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

// Function: entry_0017af48
// Address: 0x17af48 - 0x17af70
void entry_0017af48_0x17af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017af48_0x17af48");
#endif

    ctx->pc = 0x17af48u;

    // 0x17af48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17af4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17af50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17af50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17af54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17af54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17af5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17af5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17af64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17af64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17af68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17af6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17af70u;
}
