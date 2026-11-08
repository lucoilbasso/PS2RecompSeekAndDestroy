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

// Function: entry_00178880
// Address: 0x178880 - 0x1788a8
void entry_00178880_0x178880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178880_0x178880");
#endif

    ctx->pc = 0x178880u;

    // 0x178880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17888c: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x17888cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178890: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x178890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x178894: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178898: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x178898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x17889c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1788a0: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x1788a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    // 0x1788a4: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x1788a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->pc = 0x1788a8u;
}
