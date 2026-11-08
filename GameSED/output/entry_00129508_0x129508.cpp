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

// Function: entry_00129508
// Address: 0x129508 - 0x129528
void entry_00129508_0x129508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129508_0x129508");
#endif

    ctx->pc = 0x129508u;

    // 0x129508: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x129508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x12950c: 0x247191c0  addiu       $s1, $v1, -0x6E40
    ctx->pc = 0x12950cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
    // 0x129510: 0xc794810c  lwc1        $f20, -0x7EF4($gp)
    ctx->pc = 0x129510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129514: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x129514u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129518: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x129518u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12951c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x12951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x129520: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x129520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x129524: 0x0  nop
    ctx->pc = 0x129524u;
    // NOP
    ctx->pc = 0x129528u;
}
