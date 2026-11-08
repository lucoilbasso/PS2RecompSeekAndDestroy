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

// Function: entry_001162c8
// Address: 0x1162c8 - 0x116300
void entry_001162c8_0x1162c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162c8_0x1162c8");
#endif

    ctx->pc = 0x1162c8u;

    // 0x1162c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1162c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1162cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1162ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1162d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1162d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1162d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1162d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1162d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1162d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1162dc: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x1162dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x1162e0: 0x2652d532  addiu       $s2, $s2, -0x2ACE
    ctx->pc = 0x1162e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956338));
    // 0x1162e4: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1162e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1162e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1162e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1162ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1162ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1162f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1162f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1162f4: 0x27d6fcb0  addiu       $s6, $fp, -0x350
    ctx->pc = 0x1162f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966448));
    // 0x1162f8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1162f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1162fc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1162fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x116300u;
}
