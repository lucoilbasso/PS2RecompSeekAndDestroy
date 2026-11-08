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

// Function: _$_16__user_type_info
// Address: 0x1e1930 - 0x1e1994
void ps2____16__user_type_info_0x1e1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16__user_type_info_0x1e1930");
#endif

    switch (ctx->pc) {
        case 0x1e1960u: goto label_1e1960;
        default: break;
    }

    ctx->pc = 0x1e1930u;

    // 0x1e1930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1934: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e1934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e1938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e193c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e193cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1940: 0x24420c48  addiu       $v0, $v0, 0xC48
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3144));
    // 0x1e1944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e194c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e194cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1950: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e1950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e1954: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1e1954u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e1958: 0xc072f1a  jal         func_1CBC68
    ctx->pc = 0x1E1958u;
    SET_GPR_U32(ctx, 31, 0x1E1960u);
    ctx->pc = 0x1E195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1958u;
    // 0x1e195c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC68u, 0x1E1958u, 0x1E1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1960u;
label_1e1960:
    // 0x1e1960: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1960u;
    {
        const bool branch_taken_0x1e1960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1960u;
        // 0x1e1964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1960) {
            ctx->pc = 0x1E1980u;
            goto label_1e1980;
        }
    }
    ctx->pc = 0x1E1968u;
    // 0x1e1968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e196c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e196cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1974: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E1974u;
    ctx->pc = 0x1E1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1974u;
    // 0x1e1978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E197Cu;
    // 0x1e197c: 0x0  nop
    ctx->pc = 0x1e197cu;
    // NOP
label_1e1980:
    // 0x1e1980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e198c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E198Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E198Cu;
        // 0x1e1990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E198Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1994u;
}
