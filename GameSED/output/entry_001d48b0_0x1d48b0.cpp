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

// Function: entry_001d48b0
// Address: 0x1d48b0 - 0x1d48c8
void entry_001d48b0_0x1d48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48b0_0x1d48b0");
#endif

    ctx->pc = 0x1d48b0u;

    // 0x1d48b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d48b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d48b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d48b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d48b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d48bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d48c0: 0x8074086  j           func_1D0218
    ctx->pc = 0x1D48C0u;
    ctx->pc = 0x1D48C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48C0u;
    // 0x1d48c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0218u;
    ps2___malloc_unlock_0x1d0218(rdram, ctx, runtime); return;
    ctx->pc = 0x1D48C8u;
}
