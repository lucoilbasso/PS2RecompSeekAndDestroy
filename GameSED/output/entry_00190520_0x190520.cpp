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

// Function: entry_00190520
// Address: 0x190520 - 0x19056c
void entry_00190520_0x190520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190520_0x190520");
#endif

    ctx->pc = 0x190520u;

    // 0x190520: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190524: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x190528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x190528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19052c: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x19052Cu;
    {
        const bool branch_taken_0x19052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19052c) {
            ctx->pc = 0x190530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19052Cu;
            // 0x190530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190688u;
            return;
        }
    }
    ctx->pc = 0x190534u;
    // 0x190534: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190538: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x190538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19053c: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x19053Cu;
    {
        const bool branch_taken_0x19053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19053c) {
            ctx->pc = 0x190540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19053Cu;
            // 0x190540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190688u;
            return;
        }
    }
    ctx->pc = 0x190544u;
    // 0x190544: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x190544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x190548: 0x96020150  lhu         $v0, 0x150($s0)
    ctx->pc = 0x190548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x19054c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x19054cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x190550: 0x26130210  addiu       $s3, $s0, 0x210
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x190554: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x190554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x190558: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x190558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x19055c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19055Cu;
    {
        const bool branch_taken_0x19055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19055Cu;
        // 0x190560: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19055c) {
            ctx->pc = 0x19056Cu;
            return;
        }
    }
    ctx->pc = 0x190564u;
    // 0x190564: 0xc061920  jal         func_186480
    ctx->pc = 0x190564u;
    SET_GPR_U32(ctx, 31, 0x19056Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x190564u, 0x19056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19056Cu;
}
