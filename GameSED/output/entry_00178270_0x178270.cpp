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

// Function: entry_00178270
// Address: 0x178270 - 0x1782a8
void entry_00178270_0x178270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178270_0x178270");
#endif

    ctx->pc = 0x178270u;

    // 0x178270: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x178270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x178274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x178274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178278: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x178278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x17827c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x17827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x178280: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x178280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x178284: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x178284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x178288: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x178288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x17828c: 0x2671108c  addiu       $s1, $s3, 0x108C
    ctx->pc = 0x17828cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4236));
    // 0x178290: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x178290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x178294: 0x26721048  addiu       $s2, $s3, 0x1048
    ctx->pc = 0x178294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4168));
    // 0x178298: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x178298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x17829c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17829cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782a0: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1782a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1782a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1782a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1782a8u;
}
