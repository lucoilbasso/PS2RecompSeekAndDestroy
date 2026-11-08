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

// Function: entry_00108398
// Address: 0x108398 - 0x1083c8
void entry_00108398_0x108398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108398_0x108398");
#endif

    ctx->pc = 0x108398u;

    // 0x108398: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x108398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10839c: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x10839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1083a0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1083A0u;
    {
        const bool branch_taken_0x1083a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083A0u;
        // 0x1083a4: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083a0) {
            ctx->pc = 0x1083C8u;
            return;
        }
    }
    ctx->pc = 0x1083A8u;
    // 0x1083a8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1083ac: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1083ACu;
    {
        const bool branch_taken_0x1083ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083ACu;
        // 0x1083b0: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083ac) {
            ctx->pc = 0x1083C8u;
            return;
        }
    }
    ctx->pc = 0x1083B4u;
    // 0x1083b4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1083B4u;
    {
        const bool branch_taken_0x1083b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083B4u;
        // 0x1083b8: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083b4) {
            ctx->pc = 0x1083C8u;
            return;
        }
    }
    ctx->pc = 0x1083BCu;
    // 0x1083bc: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x1083bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x1083c0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1083c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1083c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1083c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1083c8u;
}
