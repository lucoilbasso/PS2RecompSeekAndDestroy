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

// Function: entry_001327c0
// Address: 0x1327c0 - 0x1327d8
void entry_001327c0_0x1327c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001327c0_0x1327c0");
#endif

    ctx->pc = 0x1327c0u;

    // 0x1327c0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1327C0u;
    {
        const bool branch_taken_0x1327c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1327c0) {
            ctx->pc = 0x1327D8u;
            return;
        }
    }
    ctx->pc = 0x1327C8u;
    // 0x1327c8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1327c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1327cc: 0xfca20170  sd          $v0, 0x170($a1)
    ctx->pc = 0x1327ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 368), GPR_U64(ctx, 2));
    // 0x1327d0: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1327d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1327d4: 0xfca30178  sd          $v1, 0x178($a1)
    ctx->pc = 0x1327d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 376), GPR_U64(ctx, 3));
    ctx->pc = 0x1327d8u;
}
