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

// Function: entry_00156b08
// Address: 0x156b08 - 0x156b1c
void entry_00156b08_0x156b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b08_0x156b08");
#endif

    ctx->pc = 0x156b08u;

    // 0x156b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156b0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b10: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x156B10u;
    {
        const bool branch_taken_0x156b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B10u;
        // 0x156b14: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b10) {
            ctx->pc = 0x156B1Cu;
            return;
        }
    }
    ctx->pc = 0x156B18u;
    // 0x156b18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x156b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x156b1cu;
}
