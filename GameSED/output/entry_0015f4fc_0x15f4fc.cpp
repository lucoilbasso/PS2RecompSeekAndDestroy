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

// Function: entry_0015f4fc
// Address: 0x15f4fc - 0x15f530
void entry_0015f4fc_0x15f4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f4fc_0x15f4fc");
#endif

    switch (ctx->pc) {
        case 0x15f518u: goto label_15f518;
        case 0x15f52cu: goto label_15f52c;
        default: break;
    }

    ctx->pc = 0x15f4fcu;

    // 0x15f4fc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15F4FCu;
    {
        const bool branch_taken_0x15f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4fc) {
            ctx->pc = 0x15F500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F4FCu;
            // 0x15f500: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F530u;
            return;
        }
    }
    ctx->pc = 0x15F504u;
    // 0x15f504: 0x8ea40f30  lw          $a0, 0xF30($s5)
    ctx->pc = 0x15f504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3888)));
    // 0x15f508: 0x24056000  addiu       $a1, $zero, 0x6000
    ctx->pc = 0x15f508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15f50c: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x15f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15f510: 0xc061372  jal         func_184DC8
    ctx->pc = 0x15F510u;
    SET_GPR_U32(ctx, 31, 0x15F518u);
    ctx->pc = 0x15F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F510u;
    // 0x15f514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15F510u, 0x15F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F518u;
label_15f518:
    // 0x15f518: 0x8ea40f34  lw          $a0, 0xF34($s5)
    ctx->pc = 0x15f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3892)));
    // 0x15f51c: 0x24056000  addiu       $a1, $zero, 0x6000
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15f520: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15f524: 0xc061372  jal         func_184DC8
    ctx->pc = 0x15F524u;
    SET_GPR_U32(ctx, 31, 0x15F52Cu);
    ctx->pc = 0x15F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F524u;
    // 0x15f528: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15F524u, 0x15F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F52Cu;
label_15f52c:
    // 0x15f52c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->pc = 0x15f530u;
}
