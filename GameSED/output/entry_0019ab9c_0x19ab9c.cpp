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

// Function: entry_0019ab9c
// Address: 0x19ab9c - 0x19abb0
void entry_0019ab9c_0x19ab9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab9c_0x19ab9c");
#endif

    ctx->pc = 0x19ab9cu;

    // 0x19ab9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19AB9Cu;
    {
        const bool branch_taken_0x19ab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab9c) {
            ctx->pc = 0x19ABCCu;
            return;
        }
    }
    ctx->pc = 0x19ABA4u;
    // 0x19aba4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x19aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19aba8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19abac: 0x0  nop
    ctx->pc = 0x19abacu;
    // NOP
    ctx->pc = 0x19abb0u;
}
