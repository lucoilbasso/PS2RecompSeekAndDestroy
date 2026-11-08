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

// Function: entry_0016b55c
// Address: 0x16b55c - 0x16b598
void entry_0016b55c_0x16b55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b55c_0x16b55c");
#endif

    ctx->pc = 0x16b55cu;

    // 0x16b55c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b560: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16b564: 0x94c20150  lhu         $v0, 0x150($a2)
    ctx->pc = 0x16b564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x16b568: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x16b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x16b56c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x16B56Cu;
    {
        const bool branch_taken_0x16b56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B56Cu;
        // 0x16b570: 0x8cb2015c  lw          $s2, 0x15C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b56c) {
            ctx->pc = 0x16B6ACu;
            return;
        }
    }
    ctx->pc = 0x16B574u;
    // 0x16b574: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16b574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b578: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x16b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x16b57c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B57Cu;
    {
        const bool branch_taken_0x16b57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B57Cu;
        // 0x16b580: 0x24d00020  addiu       $s0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b57c) {
            ctx->pc = 0x16B598u;
            return;
        }
    }
    ctx->pc = 0x16B584u;
    // 0x16b584: 0x8ca201e0  lw          $v0, 0x1E0($a1)
    ctx->pc = 0x16b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 480)));
    // 0x16b588: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x16b588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x16b58c: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x16B58Cu;
    {
        const bool branch_taken_0x16b58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B58Cu;
        // 0x16b590: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b58c) {
            ctx->pc = 0x16B6B0u;
            return;
        }
    }
    ctx->pc = 0x16B594u;
    // 0x16b594: 0x24d00020  addiu       $s0, $a2, 0x20
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    ctx->pc = 0x16b598u;
}
