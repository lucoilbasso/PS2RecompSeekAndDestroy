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

// Function: entry_00140ec0
// Address: 0x140ec0 - 0x140f30
void entry_00140ec0_0x140ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140ec0_0x140ec0");
#endif

    switch (ctx->pc) {
        case 0x140ee8u: goto label_140ee8;
        case 0x140f14u: goto label_140f14;
        default: break;
    }

    ctx->pc = 0x140ec0u;

    // 0x140ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140ec4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x140ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x140ec8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x140ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ecc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x140eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x140ed0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x140ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x140ed4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x140ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x140ed8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x140ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x140edc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x140edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x140ee0: 0xc04fbc0  jal         func_13EF00
    ctx->pc = 0x140EE0u;
    SET_GPR_U32(ctx, 31, 0x140EE8u);
    ctx->pc = 0x140EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EE0u;
    // 0x140ee4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF00u, 0x140EE0u, 0x140EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EE8u;
label_140ee8:
    // 0x140ee8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x140ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140eec: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x140eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x140ef0: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x140ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
    // 0x140ef4: 0x267500c0  addiu       $s5, $s3, 0xC0
    ctx->pc = 0x140ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x140ef8: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x140ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x140efc: 0x26740050  addiu       $s4, $s3, 0x50
    ctx->pc = 0x140efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x140f00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x140f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x140f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x140f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f0c: 0xc050560  jal         func_141580
    ctx->pc = 0x140F0Cu;
    SET_GPR_U32(ctx, 31, 0x140F14u);
    ctx->pc = 0x140F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F0Cu;
    // 0x140f10: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141580u, 0x140F0Cu, 0x140F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F14u;
label_140f14:
    // 0x140f14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x140f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f18: 0x26760030  addiu       $s6, $s3, 0x30
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x140f1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x140f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f20: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x140F20u;
    {
        const bool branch_taken_0x140f20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F20u;
        // 0x140f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f20) {
            ctx->pc = 0x140F30u;
            return;
        }
    }
    ctx->pc = 0x140F28u;
    // 0x140f28: 0xc050a56  jal         func_142958
    ctx->pc = 0x140F28u;
    SET_GPR_U32(ctx, 31, 0x140F30u);
    ctx->pc = 0x142958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142958u, 0x140F28u, 0x140F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F30u;
}
