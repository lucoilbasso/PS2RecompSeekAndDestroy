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

// Function: entry_00163e90
// Address: 0x163e90 - 0x163eb8
void entry_00163e90_0x163e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163e90_0x163e90");
#endif

    ctx->pc = 0x163e90u;

    // 0x163e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e94: 0x26230260  addiu       $v1, $s1, 0x260
    ctx->pc = 0x163e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x163e98: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x163e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
    // 0x163e9c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x163e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x163ea0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x163ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x163ea4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x163ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163eac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x163EACu;
    {
        const bool branch_taken_0x163eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EACu;
        // 0x163eb0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163eac) {
            ctx->pc = 0x163F7Cu;
            return;
        }
    }
    ctx->pc = 0x163EB4u;
    // 0x163eb4: 0x0  nop
    ctx->pc = 0x163eb4u;
    // NOP
    ctx->pc = 0x163eb8u;
}
