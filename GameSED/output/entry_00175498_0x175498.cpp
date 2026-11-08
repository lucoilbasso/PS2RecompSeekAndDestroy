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

// Function: entry_00175498
// Address: 0x175498 - 0x1754d4
void entry_00175498_0x175498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175498_0x175498");
#endif

    switch (ctx->pc) {
        case 0x1754a0u: goto label_1754a0;
        case 0x1754c0u: goto label_1754c0;
        default: break;
    }

    ctx->pc = 0x175498u;

    // 0x175498: 0xc05d426  jal         func_175098
    ctx->pc = 0x175498u;
    SET_GPR_U32(ctx, 31, 0x1754A0u);
    ctx->pc = 0x17549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175498u;
    // 0x17549c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x175498u, 0x1754A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754A0u;
label_1754a0:
    // 0x1754a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1754a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1754a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1754a8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1754a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1754ac: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1754acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1754b0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1754b0u;
    SET_GPR_S32(ctx, 21, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x1754b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1754b4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x1754b8: 0xc05d3fc  jal         func_174FF0
    ctx->pc = 0x1754B8u;
    SET_GPR_U32(ctx, 31, 0x1754C0u);
    ctx->pc = 0x1754BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754B8u;
    // 0x1754bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FF0u, 0x1754B8u, 0x1754C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754C0u;
label_1754c0:
    // 0x1754c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1754c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1754c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1754c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1754c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1754c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1754cc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1754CCu;
    {
        const bool branch_taken_0x1754cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1754cc) {
            ctx->pc = 0x1754D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1754CCu;
            // 0x1754d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1754D4u;
            return;
        }
    }
    ctx->pc = 0x1754D4u;
}
