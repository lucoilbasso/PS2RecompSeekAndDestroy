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

// Function: entry_00195488
// Address: 0x195488 - 0x195498
void entry_00195488_0x195488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195488_0x195488");
#endif

    ctx->pc = 0x195488u;

    // 0x195488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19548c: 0x8c8201a4  lw          $v0, 0x1A4($a0)
    ctx->pc = 0x19548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x195490: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x195490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195498u;
}
