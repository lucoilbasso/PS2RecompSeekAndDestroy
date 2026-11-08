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

// Function: UsePartsEqu__20ApItemGameInfomations
// Address: 0x118920 - 0x11897c
void UsePartsEqu__20ApItemGameInfomations_0x118920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UsePartsEqu__20ApItemGameInfomations_0x118920");
#endif

    switch (ctx->pc) {
        case 0x11895cu: goto label_11895c;
        default: break;
    }

    ctx->pc = 0x118920u;

    // 0x118920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118928: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x118928u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x11892c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11892cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118930: 0x108c03  sra         $s1, $s0, 16
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 16));
    // 0x118934: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x118934u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x118938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x118938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11893c: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x11893cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x118940: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x118940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118948: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x118948u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x11894c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11894cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118950: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x118950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x118954: 0xc045360  jal         func_114D80
    ctx->pc = 0x118954u;
    SET_GPR_U32(ctx, 31, 0x11895Cu);
    ctx->pc = 0x118958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118954u;
    // 0x118958: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x118954u, 0x11895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11895Cu;
label_11895c:
    // 0x11895c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x11895cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x118960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118964: 0xa6110ff0  sh          $s1, 0xFF0($s0)
    ctx->pc = 0x118964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 17));
    // 0x118968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11896c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11896cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118974: 0x3e00008  jr          $ra
    ctx->pc = 0x118974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118974u;
        // 0x118978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11897Cu;
}
