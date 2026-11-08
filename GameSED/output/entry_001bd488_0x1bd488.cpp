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

// Function: entry_001bd488
// Address: 0x1bd488 - 0x1bd4b4
void entry_001bd488_0x1bd488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd488_0x1bd488");
#endif

    switch (ctx->pc) {
        case 0x1bd49cu: goto label_1bd49c;
        default: break;
    }

    ctx->pc = 0x1bd488u;

    // 0x1bd488: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD488u;
    {
        const bool branch_taken_0x1bd488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD488u;
        // 0x1bd48c: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd488) {
            ctx->pc = 0x1BD4B4u;
            return;
        }
    }
    ctx->pc = 0x1BD490u;
    // 0x1bd490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd494: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD494u;
    SET_GPR_U32(ctx, 31, 0x1BD49Cu);
    ctx->pc = 0x1BD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD494u;
    // 0x1bd498: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD494u, 0x1BD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD49Cu;
label_1bd49c:
    // 0x1bd49c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1bd4a0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd4a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd4a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd4ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bd4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd4b0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1bd4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1bd4b4u;
}
