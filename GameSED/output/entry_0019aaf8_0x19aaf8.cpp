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

// Function: entry_0019aaf8
// Address: 0x19aaf8 - 0x19ab24
void entry_0019aaf8_0x19aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aaf8_0x19aaf8");
#endif

    ctx->pc = 0x19aaf8u;

    // 0x19aaf8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19aaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aafc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19aafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab00: 0xa102b  sltu        $v0, $zero, $t2
    ctx->pc = 0x19ab00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x19ab04: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x19ab04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab08: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x19ab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AB0Cu;
    {
        const bool branch_taken_0x19ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB0Cu;
        // 0x19ab10: 0xbd1823  subu        $v1, $a1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab0c) {
            ctx->pc = 0x19AB24u;
            return;
        }
    }
    ctx->pc = 0x19AB14u;
    // 0x19ab14: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x19ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x19ab18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab1c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19ab1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ab20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x19ab24u;
}
