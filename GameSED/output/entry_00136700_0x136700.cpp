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

// Function: entry_00136700
// Address: 0x136700 - 0x136728
void entry_00136700_0x136700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136700_0x136700");
#endif

    ctx->pc = 0x136700u;

    // 0x136700: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x136700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x136704: 0xfe820110  sd          $v0, 0x110($s4)
    ctx->pc = 0x136704u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 272), GPR_U64(ctx, 2));
    // 0x136708: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x136708u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x13670c: 0xfe830118  sd          $v1, 0x118($s4)
    ctx->pc = 0x13670cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 280), GPR_U64(ctx, 3));
    // 0x136710: 0xdca20030  ld          $v0, 0x30($a1)
    ctx->pc = 0x136710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x136714: 0xfe820120  sd          $v0, 0x120($s4)
    ctx->pc = 0x136714u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 288), GPR_U64(ctx, 2));
    // 0x136718: 0xdca30038  ld          $v1, 0x38($a1)
    ctx->pc = 0x136718u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x13671c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13671Cu;
    {
        const bool branch_taken_0x13671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13671Cu;
        // 0x136720: 0xfe830128  sd          $v1, 0x128($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 296), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13671c) {
            ctx->pc = 0x136734u;
            return;
        }
    }
    ctx->pc = 0x136724u;
    // 0x136724: 0x0  nop
    ctx->pc = 0x136724u;
    // NOP
    ctx->pc = 0x136728u;
}
