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

// Function: entry_00118a30
// Address: 0x118a30 - 0x118a50
void entry_00118a30_0x118a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118a30_0x118a30");
#endif

    ctx->pc = 0x118a30u;

    // 0x118a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118a34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x118a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x118a3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118a40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x118a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x118a44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x118a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x118a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x118a4c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x118a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118a50u;
}
