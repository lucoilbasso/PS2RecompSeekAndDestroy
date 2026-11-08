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

// Function: entry_00163604
// Address: 0x163604 - 0x163620
void entry_00163604_0x163604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163604_0x163604");
#endif

    ctx->pc = 0x163604u;

    // 0x163604: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x163604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x163608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163608u;
    {
        const bool branch_taken_0x163608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163608u;
        // 0x16360c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163608) {
            ctx->pc = 0x163620u;
            return;
        }
    }
    ctx->pc = 0x163610u;
    // 0x163610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163614: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x163614u;
    {
        const bool branch_taken_0x163614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163614u;
        // 0x163618: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163614) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x16361Cu;
    // 0x16361c: 0x0  nop
    ctx->pc = 0x16361cu;
    // NOP
    ctx->pc = 0x163620u;
}
