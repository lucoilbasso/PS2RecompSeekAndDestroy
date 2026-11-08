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

// Function: entry_00140528
// Address: 0x140528 - 0x140590
void entry_00140528_0x140528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140528_0x140528");
#endif

    switch (ctx->pc) {
        case 0x140534u: goto label_140534;
        case 0x14053cu: goto label_14053c;
        case 0x140554u: goto label_140554;
        default: break;
    }

    ctx->pc = 0x140528u;

    // 0x140528: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x140528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14052c: 0xc050a76  jal         func_1429D8
    ctx->pc = 0x14052Cu;
    SET_GPR_U32(ctx, 31, 0x140534u);
    ctx->pc = 0x140530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14052Cu;
    // 0x140530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429D8u, 0x14052Cu, 0x140534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140534u;
label_140534:
    // 0x140534: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x140534u;
    SET_GPR_U32(ctx, 31, 0x14053Cu);
    ctx->pc = 0x140538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140534u;
    // 0x140538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x140534u, 0x14053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14053Cu;
label_14053c:
    // 0x14053c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14053cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140540: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x140540u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140544: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x140544u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x140548: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x140548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x14054c: 0xc050494  jal         func_141250
    ctx->pc = 0x14054Cu;
    SET_GPR_U32(ctx, 31, 0x140554u);
    ctx->pc = 0x140550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14054Cu;
    // 0x140550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x14054Cu, 0x140554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140554u;
label_140554:
    // 0x140554: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x140554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x140558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x140558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14055c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14055cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140560: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x140560u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x140564: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x140564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x140568: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x140568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x14056c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x140570: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x140570u;
    {
        const bool branch_taken_0x140570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140570) {
            ctx->pc = 0x140574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140570u;
            // 0x140574: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405A4u;
            return;
        }
    }
    ctx->pc = 0x140578u;
    // 0x140578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x140578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14057c: 0x2862fc72  slti        $v0, $v1, -0x38E
    ctx->pc = 0x14057cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966386) ? 1 : 0);
    // 0x140580: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140580u;
    {
        const bool branch_taken_0x140580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140580) {
            ctx->pc = 0x140584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140580u;
            // 0x140584: 0x2862038f  slti        $v0, $v1, 0x38F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)911) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x140590u;
            return;
        }
    }
    ctx->pc = 0x140588u;
    // 0x140588: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x140588u;
    {
        const bool branch_taken_0x140588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140588u;
        // 0x14058c: 0x2402fc72  addiu       $v0, $zero, -0x38E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140588) {
            ctx->pc = 0x14059Cu;
            return;
        }
    }
    ctx->pc = 0x140590u;
}
